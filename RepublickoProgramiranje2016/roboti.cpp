#include <cstdio>
#include <cstring>

#define MAXR 100
#define MAXS 100
#define MAXPOTEZA 100

int R, S, N;
char ploca[MAXR][MAXS+1], pomocna[MAXR][MAXS+1];
char igrac[MAXPOTEZA+1];

int sgn( int x ) {
   if( x < 0 ) return -1;
   if( x > 0 ) return 1;
   return 0;
}

int main( void ) {
   int R, S;
   scanf( "%d%d", &R, &S );
   for( int r = 0; r < R; ++r ) scanf( "%s", ploca[r] );
   scanf( "%s", igrac );
   N = strlen( igrac );

   int igrac_r, igrac_s;
   for( int r = 0; r < R; ++r )
      for( int s = 0; s < S; ++s )
         if( ploca[r][s] == 'I' ) {
            igrac_r = r;
            igrac_s = s;
         }

   for( int i = 0; i < N; ++i ) {
      for( int r = 0; r < R; ++r )
         for( int s = 0; s < S; ++s )
            pomocna[r][s] = '.';

      igrac_r += 1 - (igrac[i]-'1')/3;
      igrac_s += (igrac[i]-'1')%3 - 1;

      if( ploca[igrac_r][igrac_s] == 'R' ) {
         printf( "kraj %d\n", i+1 );
         return 0;
      }
      pomocna[igrac_r][igrac_s] = 'I';

      for( int r = 0; r < R; ++r )
         for( int s = 0; s < S; ++s )
            if( ploca[r][s] == 'R' ) {
               int dr = sgn( igrac_r - r );
               int ds = sgn( igrac_s - s );

               if( pomocna[r+dr][s+ds] == 'I' ) {
                  printf( "kraj %d\n", i+1 );
                  return 0;
               }

               if( pomocna[r+dr][s+ds] == '.' ) pomocna[r+dr][s+ds] = 'R';
               else pomocna[r+dr][s+ds] = 'X';
            }

      for( int r = 0; r < R; ++r )
         for( int s = 0; s < S; ++s ) {
            if( pomocna[r][s] == 'X' ) pomocna[r][s] = '.';
            ploca[r][s] = pomocna[r][s];
         }
   }

   for( int r = 0; r < R; ++r ) printf( "%s\n", ploca[r] );

   return 0;
}
