import java.util.Scanner;

public class q8 {

    public static int linearSearchOrder(int arr[], int ln, int target) {

        for (int i = 0; i < ln - 1; i++) {

            for (int j = 0; j < ln - 1 - i; j++) {

                if (arr[j] > arr[j + 1]) {

                    arr[j] ^= arr[j + 1];
                    arr[j + 1] ^= arr[j];
                    arr[j] ^= arr[j + 1];
                }
            }
        }

        for (int i = 0; i < ln; i++) {

            if (target == arr[i]) {

                return i + 1;

            }

            if (target < arr[i]) {

                return -1;
            }
        }

        return -1;
    }

    public static int linearSearchUnOrder(int arr[], int ln, int target) {

        for (int i = 0; i < ln; i++) {

            if (target == arr[i]) {

                return i + 1;
            }
        }

        return -1;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter The Array Length: ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.println("Enter The Elements: ");

        for (int i = 0; i < size; i++) {

            arr[i] = sc.nextInt();
        }

        System.out.println("Enter The Key Element: ");
        int key = sc.nextInt();

        int result = linearSearchOrder(arr, size, key);
        int result2 = linearSearchUnOrder(arr, size, key);

        if (result == -1 && result2 == -1) {

            System.out.println("Element not Found on Both Array!");
        } else {

            System.out.println("Element Found on " + result + " Position on Ordered Array");
            System.out.println("Element Found on " + result2 + " Position  on Un-Ordered Array");
        }

        sc.close();

    }
}