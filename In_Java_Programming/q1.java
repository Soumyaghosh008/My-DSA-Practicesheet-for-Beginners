import java.util.Scanner;

public class q1 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int x[] = new int[5];

        System.out.println("Enter The Elements: ");

        for (int i = 0; i < 5; i++) {
            x[i] = sc.nextInt();
        }

        System.out.println("The Elements are: ");

        for (int i = 0; i < 5; i++) {
            System.out.print(x[i] + " ");
        }

        sc.close();
        ;
    }
}
