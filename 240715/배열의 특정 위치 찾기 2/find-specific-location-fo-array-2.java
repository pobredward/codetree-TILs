import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner sc = new Scanner(System.in);
        
        int sum_odd = 0;
        int sum_even = 0;
        int[] arr = new int[10];

        for (int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
            if (i % 2 == 0) {
                sum_even += arr[i];
            }
            if (i % 2 == 1) {
                sum_odd += arr[i];
            }
        }

        if (sum_even > sum_odd) {
            System.out.println(sum_even-sum_odd);
        } else if (sum_even < sum_odd) {
            System.out.println(sum_odd-sum_even);
        }


    }
}