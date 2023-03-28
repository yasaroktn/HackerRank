
int  sum (int count,...) {
    int res = 0;
    va_list(ap);
    va_start(ap, count);
    for(int i=0;i < count; i++)
        res += va_arg(ap, int);
    return(res);
}

int min(int count,...) {
    int res;
    int deg;
    va_list(ap);
    va_start(ap, count);
    res = va_arg(ap, int);
    for(int i=0;i < count;i++){
        deg = va_arg(ap, int);
        if (res > deg)
            res = deg;
    }
    return(res);
}

int max(int count,...) {
    int res;
    int deg;
    va_list(ap);
    va_start(ap, count);
    res = va_arg(ap, int);
    for(int i=0;i < count;i++){
        deg = va_arg(ap, int);
        if(res < deg)
            res = deg;
    }
    return(res);
}


