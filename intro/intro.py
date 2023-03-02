def loop(max_int) : 
    i = 0

    while max_int > 0 :
        i += 2
        max_int -= 1
    return(i)

def main() : 
    my_return = loop(15)
    return(my_return)