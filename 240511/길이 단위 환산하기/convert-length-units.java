import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);

        double ft;

        ft = sc.nextDouble();

        System.out.printf("%.1f", ft * 30.48);
    }
}