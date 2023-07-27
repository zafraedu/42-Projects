ft_atoi(const char *str){
    int i = 0;
    int sign = 1;
    long result = 0;

    while((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    if (*str == 45 || *str == 43){
        if(*str == 45)
            sign = -1;
        str++;
    }
    while(*str >= 48 && *str <= 57){
        result *= 10;
        result += *str - 48;
        str++;
    }
    return(result * sign);
}
