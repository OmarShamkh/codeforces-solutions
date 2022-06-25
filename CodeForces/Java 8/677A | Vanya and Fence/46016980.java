 
import java.util.Scanner;
 
public class Problem1 {
 
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), h = sc.nextInt(), person, sum = 0;
        for (int i = 0; i < n; i++) {
            person = sc.nextInt();
            if (person > h) {
                sum += 2;
            } else {
                sum++;
            }
 
        }
        System.out.println(sum);
 
    }
 
}