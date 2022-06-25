import java.util.Arrays;
import java.util.Scanner;
 
public class Problems3 {
 
    public static void main(String[] args) {
 
        Scanner in = new Scanner(System.in);
        int size = in.nextInt();
        int x[] = new int[size];
 
        for (int i = 0; i < size; i++) {
            x[i] = in.nextInt();
        }
        Arrays.sort(x);
        for (int i = 0; i < size; i++) {
            System.out.print(x[i] + " ");
        }
 
    }
}