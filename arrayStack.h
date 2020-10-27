using namespace std;

template<class T>
class ArrayStack{
	protected:
		T *list;
		int count = 0;
	public:
		ArrayStack(){
			list = new T[100000000];
		}
	
	//adds a new element to the top of the stack
	void push(const T& element){
		list[count] = element;
		count++;
	}
 	
	//removes and returns the top most element
	T pop(){
		T poppedItem = list[count-1];
		list[count-1] = 0;
		count--;
		return poppedItem;
	}
	
	//returns the top most element
	T peak(){
		T peakedItem = list[count-1];
		return peakedItem;
	}
	
	//returns the first in item of the stack, if stack empty, return nullptr
	T bottom(){
		if(count == 0) return nullptr;

		T bottomItem = list[0];
		return bottomItem;
	}
	
	//from the top of the stack, change an element at position index
	void changeElemAt(int index, const T& element){
		int cursor = 0;
		for(int i = count - 1; i>=0; i--){
			if(cursor == index){
				list[i] = element;
			}
			cursor++;
		}
	}
	
	//prints all of the elements of the stack out
	void print(){
		for(int i = count - 1; i >= 0; i--){
			cout<< list[i] <<endl;
		}
	}
};
