# # for i in range(1,3):
# #     name=input('Enter file name: ')
# #     ext=input('Enter the File Extension: ')
# #     f=open(f'D:\Coding\pyhton\File_Handeling\\{name+ext}','+w')
# # f=open("abc.txt","a+")
# # print("File Name: ",f.name)
# # print("Fie Mode: ",f.mode)
# # print("Is File Readable: ",f.readable())
# # print("Is File Writable: ",f.writable())
# # print("Is File Closed: ",f.close())
# # f=open("D:\Coding\pyhton\File_Handeling\\abc.txt",'w')
# # #-------------------file handling--------------------->
# # f=open('D:\\file_handling\\abc.txt','w')
# # #----------------------wap to create three text file in specific folder using file handling------------------>
# # for i in range(1,4):
# #     name=input('enter the name:')
# #     ext=input('enter extension')
# #     f=open(f'D:\\file_handling\\'+name+ext,'w')

# # print("file.name",f.name)
# # print("file.mode",f.mode)
# # print("isfile.readable",f.readable())
# # print("isfile.writable",f.writable())
# # print("isfile.closed",f.closed)

# #--------------------------different  mode-----------


# # f.write("anu")
# # f.close()
# # f=open("D:\Coding\pyhton\File_Handeling\\bcd.txt",'w')
# # y=['a\n','n\n','u\n','s\n','h\n','k\n','a\n']
# # f.writelines(y)
# # f.close()


# #--WAP to transfer data of one file to another file using file handeling--
# # f=open("D:\Coding\pyhton\File_Handeling\\bcd.txt",'r')
# # x=f.read()
# # p=open("D:\Coding\pyhton\File_Handeling\\abc.txt",'w')
# # p.write(x)
# # print(p)
# # f.close()
# # p.close()


# # 
# # f=open("D:\Coding\pyhton\File_Handeling\\abc.txt",'r')
# # x=f.read()
# # f.seek(0)
# # y=f.read(11)
# # f.seek(0)
# # z=f.readline()
# # f.seek(0)
# # t=f.readlines()
# # print(x)
# # print(y)
# # print(z)
# # print(t)
# # f.close()


# # y=f.tell()
# # x=f.read()
# # z=f.tell()
# # print(y)
# # print(z)
# # f.close()


# # with open("D:\Coding\pyhton\File_Handeling\\abc.txt",'r') as f:
# #     x=f.read()
# #     print(x)



# # WAP tp read numbers on separate lines from the file "numbers.txt",
# # calculate their sum,and print the result
# # f=open("D:\Coding\pyhton\File_Handeling\\numbers.txt",'r')
# # sum=0
# # x=f.read()

# # for i in x.split():
# #     sum=sum+int(i)
# # print(sum)

# #wap to read the name from the file shopping.txt theh sort
# # them alphabatically and print them into the sorted list
# with open("D:\Coding\pyhton\File_Handeling\shoppint.txt",'r') as t:
#     x=t.read().split()
#     y=sorted(x)
#     for i in y:
#         print(i)
#------------------tkinter method----------
# from tkinter import*
# def hello(x):
#     print('welcome')
# win=Tk()
# win.title("calculator")
# win.geometry("300x500")
# win.maxsize(300,800)
# p1=PhotoImage(file="C:\\Users\\thaku\\Downloads\\images.png")
# label=Label(win,image=p1,text='cal',
#             font=('aerial','20','bold','italic','underline'),
#             bg='yellow',
#             fg='black',
#             relief='solid',
#             bd='10',
#             padx='20',
#             pady='19',
#             compound='top')
# label.pack()
# label.bind('<Button-3>',hello)
# win.minsize(200,300)
# win.configure(bg="black")
# win.mainloop()

#  -----------------------Slicing-----------------
#-------------------scrolling the text--------------
# from tkinter import*
# def hello(x):
#     print('adarsh')
# win=Tk()
# win.geometry('100x50')
# win.maxsize(500,100)
# label=Label(win, text="welcome",
#             font=('ink free','20','bold','italic','underline'),
#             bg='yellow',
#             fg='red',
#             width='20',
#             relief='ridge',
#             bd='10',
#             anchor='w')
# label.pack()
# label1=Label(win, text="psit",
#             font=('aerial','25','bold','italic','underline'),
#             bg='green',
#             fg='blue',
#             width='20',
#             relief='ridge',
#             bd='10',
#             anchor='c')
# label1.pack()
# label2=Label(win, text="students",
#             font=('aerial','30','bold','italic','underline'),
#             bg='violet',
#             fg='black',
#             width='20',
#             relief='ridge',
#             bd='10',
#             anchor='e')
# label2.pack()
# win.minsize(300,200)
# win.configure(bg='black')
# win.mainloop()

# --------------------------------
# from tkinter import*
# data='python users'
# def scroll():
#     global data
#     data=data[1:]+data[0]
#     label.config(text=data)
#     win.after(500,scroll)
    
# win=Tk()
# label=Label(win,text='',
#             width='20',
#             font=('ink free','30','bold'),
#             bg='black',
#             fg='white'
#             )
# label.pack()
# scroll()
# win.mainloop()



# -------------------------
# from tkinter import*
# data='welcome psit students'
# run=False
# def leave(event):
#     global run
#     run=False
#     label.config(text='welcome psit students')
# def enter(event): 
#     global run
#     run=True
#     scroll()
# def scroll():
#     global data,run
#     if run:
#         data=data[1:]+data[0]
#         label.config(text=data)
#         win.after(500,scroll)
# win=Tk()
# label=Label(win,text='',
#             width='20',
#             font=('ink free','30','bold'),
#             bg='black',
#             fg='white',
#             relief='rid',
#             bd='15'
#             )
# label.bind('<Leave>',leave)
# label.bind('<Enter>',enter)
# label.pack()
# win.mainloop()

#  ----------------------------------
# from tkinter import*
# win=Tk()
# def click():
#     print('welcome')
# button=Button(win,text='click',
#               font=('aerial','20','bold'),
#               bg='blue',
#               fg='white',
#               activebackground='black',
#               activeforeground='white',
#               relief='ridge',
#               bd='20',
#               command=click)
# button.pack()
# win.mainloop()


#----------------------------------------
# from tkinter import*
# win=Tk()

# def click():
#     label.config(text='psit')
# button=Button(win,text='click',
#               font=('aerial','20','bold'),
#               bg='blue',
#               fg='white',
#               activebackground='black',
#               activeforeground='white',
#               relief='ridge',
#               bd='20',
#               command=click)
# label=Label(win, text="calculator",
#             font=('aerial','20','bold','italic','underline'),
#             bg='yellow',
#             fg='red',
#             relief='ridge',
#             bd='10',
#             padx='10',
#             pady='20')
# label.pack()
# button.pack()
# win.mainloop()


#========================
from tkinter import*
win=Tk()
i=0
run=False
win.title('button')
def start():
    global run
    run=True
    count()
def count():
    global run,i
    if run:
        label.config(text=i)
        i=i+1
        win.after(300,count)
def reset():
      global run,i
      run=False
      i=0
      label.config(text=i)
def stop():
    global run
    run=False
button1=Button(win,text='start',
              font=('aerial','20','bold'),
              bg='red',
              fg='black',
              activebackground='black',
              activeforeground='white',
              relief='ridge',
              bd='20',
              command=start)
button1.pack(side='left')
button2=Button(win,text='reset',
              font=('aerial','20','bold'),
              bg='blue',
              fg='black',
              activebackground='black',
              activeforeground='white',
              relief='ridge',
              bd='20',
              command=reset)
button2.pack(side='left')
button3=Button(win,text='stop',
              font=('aerial','20','bold'),
              bg='yellow',
              fg='black',
              activebackground='black',
              activeforeground='white',
              relief='ridge',
              bd='20',
              command=stop)
button3.pack(side='left')
label=Label(win, text="counter",
            font=('aerial','35','bold','italic','underline'),
            bg='green',
            fg='red',
            relief='ridge',
            bd='10',
            anchor='center')
label.pack(side='top')
win.mainloop()

