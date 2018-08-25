import java.util.Scanner;
public class TajniAgent {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Unesi prvi sedmocifreni broj"); // vreme potrebno da Stefan dodje do bilo koje stanice
        int n = sc.nextInt();
        n = (n/10000)*1000+n%1000; // oduzimanje cifre na mestu hiljadarke
        
        System.out.println("Unesi drugi petocifreni broj"); // vreme potrebno autobusu da dodje do stanice 1
        int k = sc.nextInt();
        k=((k/10)*10+3)*10+k%10; // ubacivanje cifre na mestu desetica
        
        System.out.println("Unesi treci sestocifreni broj"); // vreme potrebno autobusu da prodje put od stanice 1 do stanice 2
        int m = sc.nextInt();
        m=m+(m%10-(m/100)%10)*100+((m/100)%10-m%10); // zamena cifre stotica i jedinica
        
        System.out.println(n);
        System.out.println(k);
        System.out.println(m);
        n = (n/100)%100;
        k = (k/100)%100;
        m = (m/100)%100;
        
        int t = k - n;
        if(t>=0) System.out.println("STANICA 1:"+t);
        else    System.out.println("STANICA 1:KASNI");
        t = t + m;
        if(t>=0) System.out.println("STANICA 2:"+t);
        else    System.out.println("STANICA 2:KASNI");
    }
    
}
