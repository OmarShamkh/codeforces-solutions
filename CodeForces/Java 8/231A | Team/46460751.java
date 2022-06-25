import java.util.Scanner;
 
public class Problems2 {
 
    public static void main(String[] args) {
 
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), res = 0;
 
        for (int i = 0; i < n; i++) {
            int a = input.nextInt(), b = input.nextInt(), c = input.nextInt();
            if ((a + b + c) >= 2) {
                res++;
            }
 
        }
        System.out.println(res);
    }
}