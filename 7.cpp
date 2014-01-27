/*****************************************
 *
 * Rotate a one-dimensional array of n elements to the right by k steps. 
 * For instance, with n=7 and k=1, the array {a, b, c, d, e, f, g} 
 * is rotated to {b, c, d, e, f, g， a}. If k = 3 instead of 1, then 
 * is rotated to {e, f, g, a, b, c, d}.
 * Required in-place rotation method, which means space complexity is O(1).
 *****************************************/



void reverse(string& s, int a, int b){
    while(a<b){
        char temp = s[a];
        s[a] = s[b];
        s[b] = temp;
        a ++;
        b --;
    }
}


void rotate(string& s, int k){
    reverse(s,0,k-1);
    reverse(s,k,s.length()-1);
    reverse(s,0,s.length()-1);
}
