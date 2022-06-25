import java.util.Scanner;
 
public class Problems5 {
 
    public static void main(String[] args) {
 
        Scanner in = new Scanner(System.in);
        String word = in.next();
        char x[] = word.toCharArray();
        int up = 0;
        int low = 0;
 
        for (int i = 0; i < x.length; i++) {
 
            if (Character.isUpperCase(x[i])) {
                up++;
            } else {
                low++;
            }
        }
        if (up > low) {
            System.out.println(word.toUpperCase());
        } else {
            System.out.println(word.toLowerCase());
        }
 
    }
}