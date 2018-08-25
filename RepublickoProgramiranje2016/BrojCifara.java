import java.util.Scanner;
public class BrojCifara
{
    public static void main(String[] args) 
    {
        int d, z=0, rez=0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(d=1;n/d>0;d*=10)
            rez+=d*9*++z;
        rez-=(d-n-1)*z;
        System.out.println(rez);
    }
}
