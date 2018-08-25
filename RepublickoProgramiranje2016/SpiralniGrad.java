import java.util.Scanner;
public class SpiralniGrad
{
    public static double trunc(double d) 
    {
        return (double)((int)d);
    }
    public static void main(String[] args) 
    {
        int r,b1,b2,b3,b4;
        // ukupni broj kuca u prvih r okruga je (2 * r + 1) * (2 * r + 1)
        Scanner sc = new Scanner(System.in);
        System.out.println("Unesi redni broj kuce");
        int n = sc.nextInt();
        if(trunc(Math.sqrt(n))==Math.sqrt(n)) r = (int)trunc(Math.sqrt(n)) - 1;
        else r = (int)trunc(Math.sqrt(n));
        if(r%2!=0) r = r+1;
        r = (r+1)/2;
        System.out.println("Kuca pripada okrugu "+r);
        // u r-tom okrugu ima 2 * (2 * r + 1) + 2 * (2 * r - 1) = 8 * r kuca, osim ako je r = 0
        int t=8*r;
        System.out.println("U tom okrugu ukupno ima "+t+" kuca");
        // Sada se obradjuje redni broj kuce u okrugu
        int rb = n - (2*r-1)*(2*r-1);
        if(n==(2 * r - 1)*(2 * r - 1) + 2 * r || 
           n==(2 * r - 1)*(2 * r - 1) + 4 * r  || 
           n==(2 * r - 1)*(2 * r - 1) + 6 * r )
           {
                b1 = n - 1;
                b2 = n + 1;
                b3 = n + 8 * r + 1 + (rb - 1)/(2 * r) * 2;
                b4 = n + 8 * r + 1 + (rb - 1)/(2 * r) * 2 + 2;
           }
        else if(n==(2 * r + 1)*(2 * r + 1)) 
        {
                b1 = n - 8 * r + 1;
                b2 = n - 1;
                b3 = n + 1;
                b4 = n + 8 * r + 1 + (rb - 1)/(2 * r) * 2;
        }
        else if(n==(2 * r - 1)*(2 * r - 1)+1)
        {
                b1 = n - 1;
                b2 = n + 1;
                b3 = n + 8 * r - 1;
                b4 = n + 8 * r + 1;
        }
        else
        {
                b1 = n - 8 * (r - 1) - 1 - (rb - 1)/(2 * r) * 2;
                b2 = n - 1;
                b3 = n + 1;
                b4 = n + 8 * r + 1 + (rb - 1)/(2 * r) * 2;
        }
        System.out.println("Red "+r);
        System.out.println("Redni broj kuce u okrugu "+rb);
        System.out.println(b1+" "+b2+" "+b3+" "+b4);
        
        }
}
