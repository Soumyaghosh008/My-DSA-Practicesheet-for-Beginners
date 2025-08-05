//! Doing this problem using array for avoiding unnecessery code complication.
//* But you can also do it using Vector.

import java.util.Scanner;

public class q33 {

    public static void get_MIN_Element(int arr[], int ln) {

        int min = Integer.MAX_VALUE;

        System.out.println("\n");

        for (int i = 0; i < ln - 1; i++) {

            for (int j = i + 1; j < ln; j++) {

                min = Integer.MAX_VALUE;

                for (int k = i; k <= j; k++) {

                    if (arr[k] < min) {
                        min = arr[k];
                    }
                }

                System.out.println("The Minimum Subarray Element is: " + min);
            }
        }
    }

    public static void get_MAX_Element(int arr[], int ln) {

        int max = Integer.MIN_VALUE;

        for (int i = 0; i < ln - 1; i++) {

            for (int j = i + 1; j < ln; j++) {

                max = Integer.MIN_VALUE;

                for (int k = i; k <= j; k++) {

                    if (arr[k] > max) {
                        max = arr[k];
                    }
                }

                System.out.println("The Maximum Subarray Element is: " + max);
            }
        }
    }

    public static void get_Element(int arr[], int ln, Scanner sc) {
        System.out.println("Enter The Array Elements: ");

        for (int i = 0; i < ln; i++) {
            arr[i] = sc.nextInt();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Array Length: ");
        int ln = sc.nextInt();

        int arr[] = new int[ln];

        get_Element(arr, ln, sc);

        get_MAX_Element(arr, ln);
        get_MIN_Element(arr, ln);

        sc.close();
    }
}
