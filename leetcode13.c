int value (char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }return -1;
}
int romanToInt(char* s) {
    int index = 0;
    int temp[1000];
    for (int i=0; i<strlen(s); i++) {
        if (value(s[i]) >= value(s[i+1])) {
            temp[index] = value(s[i]);
            index++; 
        }
        else {
            temp[index] = -value(s[i]);
            index++;
        }   
    }
    int sum =0;
    for (int j=0; j<index; j++) {
        sum = sum + temp[j];
    }
    return sum;
}