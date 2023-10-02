#ifndef ITEM_H_
#define ITEM_H_
class Item {
public:
   Item(int, float);
   Item( );
   Item (const Item&);
   virtual ~Item( );
   virtual void print( );
   static int getNumberOfItems( );
   static int getTotal();

    void incrementBaseTotal(); // increments the total 
    void decrementBaseTotal();  // increments the total 
    
    
private: // "private" to make explicit
   static int numberOfItems; // this is related to the number of Items there are 
   int itemNum;
   float price;
   static int total;
};
#endif /* ITEM_H_ */



class ItemD : public Item {
public:
    ItemD();
    ItemD(int, float);
    ItemD(const ItemD&);
     ~ItemD() override;
    void print() override;
    static int getNumberOfItems( ); // this return the number of ItemD, unrelated to the base class one
    
    void incrementBaseTotal();
    void decrementBaseTotal();

private:
    static int numberOfItems; // this is related to the number of ItemDs there are 
    int itemNum;
    float price;
};