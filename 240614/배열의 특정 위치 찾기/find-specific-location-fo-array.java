import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];

        int res1 = 0;
        double res2 = 0;
        int res2_cnt = 0;

        for (int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            if (arr[i]%2==0) {
                res1 += arr[i];
            }
            if (arr[i]%3==0) {
                res2 += arr[i];
                res2_cnt++;
            }
        };

        res2 = res2/(double)res2_cnt;
        res2 = Math.round(res2*10)/(10.0);

        System.out.printf("%d %.1f", res1, res2);

    }
}