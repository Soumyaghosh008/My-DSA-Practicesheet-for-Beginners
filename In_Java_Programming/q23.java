//! Here we do this code using array, because this will be more interesting here.
//* In Vector's we have some built in functions for this, which will make this program more easier.

import java.util.Scanner;

public class q23 {

    public static void get_Rotate(int arr[], int ln) {

        for (int i = ln - 1; i > 0; i--) {

            arr[i] ^= arr[i - 1];
            arr[i - 1] ^= arr[i];
            arr[i] ^= arr[i - 1];
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

        System.out.print("Enter The Array Length: ");
        int ln = sc.nextInt();

        int arr[] = new int[ln];

        get_Element(arr, ln, sc);

        get_Rotate(arr, ln);

        System.out.println("The Right Rotated Array is:");

        for (int i = 0; i < ln; i++) {
            System.out.print(arr[i] + " ");
        }

        sc.close();
    }
}
