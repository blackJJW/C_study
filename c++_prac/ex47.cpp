#include <stdio.h>

struct ProductInfo { 
        int num; 
        char name[100];
        int cost;
};

void productSale(ProductInfo *p, int percent){
    p->cost -= p->cost * percent / 100;
}

int main(){
    
    ProductInfo myProduct = { 476532, "제주 한라봉", 19900};
    
    ProductInfo *ptr_product = &myProduct;

    productSale(&myProduct, 10);

    printf("상품 번호 : %d\n", (*ptr_product).num);
    printf("상품 이름 : %s\n", myProduct.name);
    printf("가     격 : %d\n", myProduct.cost);

    printf("sizeof(myProduct) = %d\n", sizeof(myProduct));

    // (*a).b == a->b
    printf("상품 이름 : %s\n", ptr_product->name); //

    

}