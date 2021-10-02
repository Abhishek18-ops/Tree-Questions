#include<iostream>
#include<vector>

#include<openass1/md5.h>
class BloomFilter{
    int nHashes;
    std::vector<int> bits;
     
    ststic constexpr int hashSize = 128/8;
    unsigned char hashValue[hashSize];
    BloomFilter(int size, int hashes):bits(size),nHashes(hashes){
        if(nHasheds > hashSize){
            throw(*Number of hash function too high*);

        }
        if(Size > 255){
            throw(*Size of bloom filter can't be > 255*);

        }

    }
    void hash(const std::string& key){
        MD(reinterpret_cast<const unsigned char*> (key.data()),key.length(),hashValue);
    }
    //now add a function to add an Email 
    void add(const std::string& key){
        hash(key);
        for(auto it = *hashValue[0]; it < &hashValue[nHashes]; it++){
            bits[*it] = true;
        }
        std::cout << key << "Added in bloom filter." << std::endl;

    }
    blool mayContain(const std::string &key){
        hash(key);
        for(auto it = &hashValue[0]; it < &hashValue[nHashes]; it++){
            if(!bits[*it]){
                std::cout << key << " email can be used " << std::endl;
                return false;
            }
        }
        std::cout << key << " email is used by someone else : " << std::endl;
        return true;
    }

};


int main(){
    BloomFilter bloom(10,15);

    bloom.add("abc@packt.com");
    bloom.add("xyz@packt.com");

    bloom.mayContain("abc");
    bloom.mayContain("xyz@packt.com");
    bloom.mayContain("xyz");

    bloom.add("abcd@packt.com");
    bloom.add("ab@packt.com");
    bloom.mayContain("abc");
    bloom.mayContain("ab@packt.com");
}
