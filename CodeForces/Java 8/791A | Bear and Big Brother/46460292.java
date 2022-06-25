import java.util.Scanner;
public class Problems2 {
 
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int a= input.nextInt() , b=input.nextInt();
        
        int res=0;
        while(a<=b){
         a *=3;
         b *=2;
         res++;
        }
        
        
        System.out.println(res);
        
        
    }
    
}