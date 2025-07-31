//! Doing this problem using array for avoiding unnecessery code complication.
//* But you can also do it using Vector.

import java.util.Scanner;

public class q31 {

    public static void get_Subarrays(int arr[], int ln) {

        System.out.println("\n");

        for (int i = 0; i < ln; i++) {

            for (int j = i; j < ln; j++) {

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
        get_Subarrays(arr, ln);

        sc.close();
    }
}
