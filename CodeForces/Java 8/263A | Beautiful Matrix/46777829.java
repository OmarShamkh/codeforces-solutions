import java.util.Scanner;
 
public class Problems3 {
 
    public static void main(String[] args) {
 
        Scanner sc = new Scanner(System.in);
        int arr[][] = new int[5][5];
        int count = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                arr[i][j] = sc.nextInt();
                if (arr[i][j] == 1) {
                    count += Math.abs(i - 2) + Math.abs(j - 2);
                    break;
                }
            }
        }
        System.out.println(count);
    }
}