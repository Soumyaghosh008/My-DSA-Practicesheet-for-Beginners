import java.util.Scanner;

public class q28 {

    public static void get_Ascending(int arr[], int ln) {

        for (int i = 0; i < ln - 1; i++) {
            for (int j = 0; j < ln - 1 - i; j++) {

                if (arr[j] > arr[j + 1]) {

                    arr[j] ^= arr[j + 1];
                    arr[j + 1] ^= arr[j];
                    arr[j] ^= arr[j + 1];
                }
            }
        }

        System.out.println("The Sorted Array in Ascending Order is: ");

        for (int i = 0; i < ln; i++) {
            System.out.println(arr[i] + " ");
        }
    }

    public static void get_Decending(int arr[], int ln) {

        for (int i = 0; i < ln - 1; i++) {
            for (int j = 0; j < ln - 1 - i; j++) {

                if (arr[j] < arr[j + 1]) {

                    arr[j] ^= arr[j + 1];
                    arr[j + 1] ^= arr[j];
                    arr[j] ^= arr[j + 1];
                }
            }
        }

        System.out.println("The Sorted Array in Decending Order is: ");

        for (int i = 0; i < ln; i++) {
            System.out.println(arr[i] + " ");
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
        get_Ascending(arr, temp, ln);
        get_Decending(arr, ln);

        sc.close();
    }
}