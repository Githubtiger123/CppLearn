

#include <iostream>
#include <optional>

template<class T>
class MyArray {

private:
    T *pAddress;
    int capacity;
    int size;

public:
    explicit MyArray(int capacity) : capacity(capacity) {

        pAddress = new T[capacity];
        size = 0;
    }

    MyArray(const MyArray<T> &myArray) {

        this->capacity = myArray.capacity;
        this->pAddress = new T[myArray.capacity];
        this->size = myArray.size;
        for (int i = 0; i < size; ++i) {
            pAddress[i] = myArray.pAddress[i];
        }
    }

    MyArray<T> &operator=(const MyArray<T> &myarray) {

        this->capacity = myarray.capacity;
        this->size = myarray.size;
        //先判断原来对象中是否有数据,有的话释放干净
        if (this->pAddress != nullptr) {
            delete[] pAddress;
            this->pAddress = nullptr;
        }
        this->pAddress = new T[myarray.capacity];
        for (int i = 0; i < size; ++i) {
            this->pAddress[i] = myarray.pAddress[i];
        }

        return *this;
    }

    //要象作为左边的值进行赋值操作,就要返回引用
    T &operator[](int index) {

        if (index >= this->capacity || index < 0) {

            //抛出异常
            throw std::out_of_range("Index out of bounds!");
        }

        return this->pAddress[index];
    }

    bool insert(const T &element) {

        if (this->size == this->capacity) {
            std::cout << "空间不足" << std::endl;
            return false;
        } else {
            this->pAddress[size++] = element;
            return true;
        }
    }

    // std::optional<T>为无值返回
    T poll() {

        if (this->size == 0) {
            throw std::out_of_range("is null");
        } else {
            T element = this->pAddress[size - 1];
            this->size--;
            return element;
        }
    }

    int getCapacity() const {
        return capacity;
    }


    int getSize() const {
        return size;
    }

    virtual ~MyArray() {

        if (pAddress != nullptr) {
            delete[] pAddress;
            pAddress = nullptr;
        }
    }

    friend std::ostream &operator<<(std::ostream &os, const MyArray &array) {
        std::cout << "打印数组:" << std::endl;
        os << "pAddress: [";
        for (int i = 0; i < array.capacity; ++i) {
            os << array.pAddress[i];
            if (i < array.size - 1) { // 防止在最后一个元素后也输出", "
                os << ", ";
            }
        }
        os << "]";
        return os;
    }

};