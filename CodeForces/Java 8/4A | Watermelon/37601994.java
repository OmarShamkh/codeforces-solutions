import java.util.Scanner;
 
public class Problems {
 
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        
       
             
          int weight = sc.nextInt();
        if(weight >2 && weight % 2==0){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}