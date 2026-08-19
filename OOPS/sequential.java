package OOPS;

import java.util.*;
class sequential {
    public static int search(int arr[], int x) {
        int n, i;
        n = arr.length;
        for (i=0 ; i<n; i++ ){
            if (arr[i] ==x)
                return i;
        } 
        return -1;
    }
    public static void main(String args[]) {
        int arr[] = {2, 3, 4, 10, 40};
        int x, result;
        x =10;
        result = search(arr, x);
        if (result == -1)
            System.out.println("Element is not present in array");
        else
            System.out.println("Element is present at index" + result );
    }
}