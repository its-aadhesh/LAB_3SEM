package OOPS;

import java.util.*;
class binary{
    public static void binary (String[] args){
        int key, first, last, mid,;
        int numArray [] ={5, 10, 15, 20, 25, 30, 35};
        System.out.println("The input array :" +Arrays.toString(numArray));
        key = 20;
        System.out.println("The key to be searched is" + key);
        first = 0;
        last = numArray.length -1;
        mid = (first+last)/2;
        while (first<=last){
            if(numArray[mid]<key){
                first = mid+1;
            }else if (numArray[mid]==key){
                System.err.println("The element is found at the index "+mid);
                break;
            }else {
                last = mid -1;
            }
            mid = (first + last)/2;
                
        }
        if (first > last){
            System.out.println("The element is not found in the array ");
        }
    }
}


