//! Doing this problem using array for avoiding unnecessery code complication.
//* But you can also do it using Vector.

import java.util.Scanner;

public class q30 {

    public static void get_Pairs(int arr[], int ln) {

        System.out.println("\n");

        for (int i = 0; i < ln - 1; i++) {

            for (int j = i + 1; j < ln; j++) {

                for (int k = i; k <= j; k++) {

                    System.out.print(arr[k] + " ");
                }
                System.out.print("\n");
            }
        }
    }

    public static void get_Element(int arr[], int ln, Scanner sc) {

        System.out.println("Enter Array Elements: ");

        for (int i = 0; i < ln; i++) {
            arr[i] = sc.nextInt();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int ln = sc.nextInt();

        int arr[] = new int[ln];

        get_Element(arr, ln, sc);
        get_Pairs(arr, ln);

        sc.close();
    }
}
