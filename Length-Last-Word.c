int lengthOfLastWord(char* s) {
    int len = strlen(s) - 1;
    while (len > 0 && s[len] == ' ') {
        len--;
    }
    int count = 0;
    while (len >= 0 && s[len] != ' ') {
        len--;
        count++;
    }
    return count;
}