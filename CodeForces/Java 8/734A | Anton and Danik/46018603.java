 
import java.util.Scanner;
 
public class Problem1 {
 
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        int games =sc.nextInt();
        sc.nextLine();
        String win =sc.nextLine();
        int a=0 , d=0;
        
        for(char x : win.toCharArray()){
            if(x=='A')
                a++;
            else
                d++;
            
        }
            if(a>d)
                System.out.println("Anton");
            else if(d>a)
                System.out.println("Danik");
            else
                System.out.println("Friendship");
        }
        
    }
 