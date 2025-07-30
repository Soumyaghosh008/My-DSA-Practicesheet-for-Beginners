import java.util.Scanner;

public class q2 {

    public static int getElements(int arr[]) {

        System.out.println("The Elements are: ");

        for (int i = 0; i < 10; i++) {
            System.out.print(arr[i] + " ");
        }

        return 0;
    }

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int x[] = new int[10];

        System.out.println("Enter The Elements: ");

        for (int i = 0; i < 10; i++) {
            x[i] = sc.nextInt();
        }

        getElements(x);

        sc.close();
    }
}
