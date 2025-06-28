import math

def calculate_edl() -> int:
    b_section = 0.9
    h_height = 6.0
    p_reflectance = 0.95

    cfi = []

    for i in range(31):
        if i == 0:
            cfi_value = (math.sin(math.atan(b_section/h_height/2)))**2
            cfi.append(cfi_value)
            
        else:
            cfi_value = ((math.sin(math.atan((i+0.5)*b_section/h_height)))**2 -(math.sin(math.atan((i-0.5)*b_section/h_height)))**2)*p_reflectance**i
            cfi.append(cfi_value)

    sum_cfi = round(sum(cfi)*100)
    return sum_cfi

def calculate_n() -> int:
    b_section = 0.9
    e_lux = 200
    e_external = 20000
    a_area = 544
    fd = 0.7
    CD_VALUE: int = 3
    
    edl_lux = (calculate_edl()*e_external)/100
    print(f"{edl_lux}")
    
    duct = edl_lux*(b_section**2)
    print(f"{duct}")

    n = round((e_lux*a_area)/(duct*CD_VALUE*fd))
    print(f"{n}")

    return n

calculate_edl()
calculate_n()
