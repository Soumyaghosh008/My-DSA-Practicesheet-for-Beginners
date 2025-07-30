import java.util.Scanner;

public class q9 {

    public static void reverse3rdarray(int arr[], int ln) {

        int temp[] = new int[ln];

        for (int i = 0; i < ln; i++) {

            temp[i] = arr[ln - 1 - i];
        }

        System.out.println("The Reverse array using 3rd array is: ");

        for (int i = 0; i < temp.length; i++) {
            System.out.print(temp[i] + " ");
        }

    }

    public static void reverseWithout3rdarray(int arr[], int ln) {

        for (int i = 0; i < ln / 2; i++) {

            arr[i] ^= arr[ln - 1 - i];
            arr[ln - 1 - i] ^= arr[i];
            arr[i] ^= arr[ln - 1 - i];
        }

        System.out.println("The Reverse array using 3rd array is: ");

        for (int i = 0; i < ln; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The array Length: ");
        int ln = sc.nextInt();

        int arr[] = new int[ln];

        System.out.println("Enter The array Elements: ");

        for (int i = 0; i < ln; i++) {

            arr[i] = sc.nextInt();
        }

        reverse3rdarray(arr, ln);
        reverseWithout3rdarray(arr, ln);

        sc.close();
    }
}
