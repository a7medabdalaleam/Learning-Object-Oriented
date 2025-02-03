#This is the Frist project of OOP
#python is multiparadigm programming language
class car:
# when we create a class python looks for __init__ to verify data to the object
    def __init__(self,name,color,maxspeed,model): # Here you can write the parameter of the Object
        self.__name=name # name attribute =name as parameter 
        self.__color=color # color attribute =color as parameter 
        self.__maxspeed=maxspeed # maxspeed attribute =maxspeed as parameter 
        self.__model=model # moded attribute =model as parameter 
    #here set function to change the private attribute
    # for your information (private attribute in python is just a name convension) 
    def setName(self,new_name):
        self.__name=new_name
    def setcolor(self,new_color):
        self.__color=new_color
    def setMaxspeed(self,new_Maxspeed):
        self.__maxspeed=new_Maxspeed
    def setmode(self,new_model):
        self.__model=new_model
    #Funcion to get private attributes 
    def getName(self):
        return self.__name
    def getcolor(self):
        return self.__color
    def getmaxspeed(self):
        return self.__maxspeed
    def getmode(self):
        return self.__model
    #printall is a function to print every thing
    def printall(self):
        print(f"Name = {self.__name} \nthe color = {self.__color} \nthe maxspeed = {self.getmaxspeed()} \nthe model = {self.__model} ")
# here we made class instantiate means create a class from the object 
car1=car("Kia","Red",203,2016)
car1.setName("BMW")
car1.printall()
        