#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; // variabel untuk menyimpan input dari lingkaran maupun bujursangkar

public:
    bidangDatar() { // constructor
        x = 0;
    }
    virtual void input() {
        int sisi;
        cin >> sisi;
        setX(sisi);
    } // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x

    virtual float Luas(int a){ 
        return 0;
    } // fungsi untuk menghitung luas

    virtual float Keliling(int a) {
        return 0; 
    } // fungsi untuk menghitung keliling

    void setX(int a) { // fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }

    int getX() { // fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        cout << "Masukkan jejari: ";
        int jejari;
        cin >> jejari;
        setX(jejari);
    }

    float Luas(int a) {
        return 3.14 * a * a;   //rumus luas lingkaran adalah 3,14 x r^ 
    }

    float Keliling(int a) {
        return 2 * 3.14 * a;   //rumus keliling lingkaran adalah 2 x 3,14 x jejari
    }
};

class Bujursangkar : public bidangDatar {
public:
    void input() {
        cout << "Masukkan sisi: ";
        int sisi;
        cin >> sisi;
        setX(sisi);
    }

    float Luas(int a) {        //rumus luas bujursangkar adalah sisi x sisi
        return a * a;
    }

    float Keliling(int a) {    //rumus keliling bujursangkar adalah 4 x sisi
        return 4 * a;
    }
};

int main() {
    bidangDatar* bangunDatar;

    cout << "Lingkaran dibuat" << endl;
    bangunDatar = new Lingkaran();
    bangunDatar->input();
    cout << "Luas Lingkaran = " << bangunDatar->Luas(bangunDatar->getX()) << endl;
    cout << "Keliling Lingkaran = " << bangunDatar->Keliling(bangunDatar->getX()) << endl;

    cout << "Bujursangkar dibuat" << endl;
    bangunDatar = new Bujursangkar();
    bangunDatar->input();
    cout << "Luas Bujursangkar = " << bangunDatar->Luas(bangunDatar->getX()) << endl;
    cout << "Keliling Bujursangkar = " << bangunDatar->Keliling(bangunDatar->getX()) << endl;

    return 0;
}