#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for product information
struct Product {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
};

// Function Prototypes
void writeProducts(const char *filename, int numProducts);
void appendProducts(const char *filename, int numProducts);
void readProducts(const char *filename);
void modifyProduct(const char *filename);

int main() {
    const char *filename = "products.bin";
    int choice, numProducts;

    do {
        printf("\n-- Product Management System --\n");
        printf("1. Write Products\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of products to write: ");
                scanf("%d", &numProducts);
                writeProducts(filename, numProducts);
                break;

            case 2:
                printf("Enter the number of products to append: ");
                scanf("%d", &numProducts);
                appendProducts(filename, numProducts);
                break;

            case 3:
                readProducts(filename);
                break;

            case 4:
                modifyProduct(filename);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// ================= WRITE (Overwrite) =================
void writeProducts(const char *filename, int numProducts) {
    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return;
    }

    struct Product p;

    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter details for product %d:\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &p.product_id);
        getchar();

        printf("Product Name: ");
        fgets(p.product_name, 50, stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &p.price);

        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, fp);
    }

    fclose(fp);
    printf("Products have been written to the file successfully.\n");
}

// ================= APPEND =================
void appendProducts(const char *filename, int numProducts) {
    FILE *fp = fopen(filename, "ab");
    if (fp == NULL) {
        printf("Cannot open file!\n");
        return;
    }

    struct Product p;

    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter details for product %d:\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &p.product_id);
        getchar();

        printf("Product Name: ");
        fgets(p.product_name, 50, stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;

        printf("Price: ");
        scanf("%f", &p.price);

        printf("Quantity: ");
        scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, fp);
    }

    fclose(fp);
    printf("Products have been appended to the file successfully.\n");
}

// ================= READ =================
void readProducts(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    struct Product p;

    printf("\nReading products from the file:\n");
    printf("--------------------------------------------------\n");
    printf("Product ID   Product Name        Price    Quantity\n");
    printf("--------------------------------------------------\n");

    while (fread(&p, sizeof(struct Product), 1, fp) == 1) {
        printf("%-12d %-18s %-8.2f %-8d\n",
               p.product_id,
               p.product_name,
               p.price,
               p.quantity);
    }

    printf("--------------------------------------------------\n");

    fclose(fp);
}

// ================= MODIFY =================
void modifyProduct(const char *filename) {
    FILE *fp = fopen(filename, "rb+");
    if (fp == NULL) {
        printf("File not found!\n");
        return;
    }

    int id, found = 0;
    struct Product p;

    printf("Enter the Product ID to modify: ");
    scanf("%d", &id);

    while (fread(&p, sizeof(struct Product), 1, fp) == 1) {
        if (p.product_id == id) {
            found = 1;

            printf("Product found. Enter new details:\n");

            getchar();
            printf("New Product Name: ");
            fgets(p.product_name, 50, stdin);
            p.product_name[strcspn(p.product_name, "\n")] = 0;

            printf("New Price: ");
            scanf("%f", &p.price);

            printf("New Quantity: ");
            scanf("%d", &p.quantity);

            fseek(fp, -sizeof(struct Product), SEEK_CUR);
            fwrite(&p, sizeof(struct Product), 1, fp);

            printf("Product updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Product ID not found.\n");
    }

    fclose(fp);
}