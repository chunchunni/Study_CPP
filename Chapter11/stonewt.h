#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
private:
    enum {Lbs_per_stn = 14};      
    int stone;                    
    double pds_left;             
    double pounds;                
public:
    Stonewt(double lbs);          
    Stonewt(int stn, double lbs); 
    Stonewt();                    
    ~Stonewt();
    void show_lbs() const;        
    void show_stn() const;        
    operator int() const;   //类型转换函数
    operator double() const;
};
#endif
