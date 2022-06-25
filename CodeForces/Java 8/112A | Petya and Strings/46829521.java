import java.util.Scanner;
 
public class Problems4 {
 
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
 
        String st1 = in.next();
        String st2 = in.next();
 
        st1 = st1.toLowerCase();
        st2 = st2.toLowerCase();
 
        int comp = st1.compareTo(st2);
 
        if (comp == 0) {
            System.out.println("0");
        } else if (comp > 0) {
            System.out.println("1");
        } else {
            System.out.println("-1");
        }
 
    }
 
}