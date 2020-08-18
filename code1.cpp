import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args){

        int n = scanner.nextInt();

        int d = scanner.nextInt();

        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[(i+n-d)%n]=scanner.nextInt();
        }

        for(int i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
        
    }
}

