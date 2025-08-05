//! Here we do this code using array, because this will be more interesting here.
//* In Vector's we have some built in functions for this, which will make this program more easier.

import java.util.Scanner;

public class q24 {

    public static boolean get_Checked(int arr[], int ln) {

        for (int i = 0; i < ln - 1; i++) {

            if (arr[i] > arr[i + 1]) {

                if (arr[i] != arr[i + 1]) {

                    return false;
                }
            }
        }

        return true;
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

        boolean ans = get_Checked(arr, ln);

        if (ans == true) {
            System.out.println("Array is Sorted in Assending Order");
        } else {
            System.out.println("Array is not Sorted in Assending Order");
        }

        sc.close();
    }
}
