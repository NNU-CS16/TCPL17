    #include<stdio.h>  
    #include<stdlib.h>  
    #include<string.h>  
    #include<dirent.h>
    #include<sys/stat.h>
    int is_dir(char* path)
    { 
        struct stat st;  
        stat(path,&st);  
        if(S_ISDIR(st.st_mode))
        {  
            return 1;  
        }  
        else{  
            return 0;  
        }  
    }  
    int endwith(char* s,char c)
    {  
        if(s[strlen(s)-1]==c)
        {  
            return 1;  
        }  
        else{  
            return 0;  
        }  
    }  
    char* str_contact(char* str1,char* str2)
    {
        char* result;  
        result=(char*)malloc(strlen(str1)+strlen(str2)+1);
        if(!result)
        {  
            printf("字符串连接时，内存动态分配失败\n");  
            exit(1);  
        }  
        strcat(result,str1);  
        strcat(result,str2); 
        return result;  
    }   
    void copy_file(char* source_path,char *destination_path)
    {
        char buffer[1024];  
        FILE *in,*out; 
        if((in=fopen(source_path,"r"))==NULL)
        { 
            printf("源文件打开失败！\n");  
            exit(1);  
        }  
        if((out=fopen(destination_path,"w"))==NULL)
        {
            printf("目标文件创建失败！\n");  
            exit(1);  
        }  
        int len; 
        while((len=fread(buffer,1,1024,in))>0)
        {
            fwrite(buffer,1,len,out);  
        }  
        fclose(out);  
        fclose(in);  
    }  
    void copy_folder(char* source_path,char *destination_path)
    {
        if(!opendir(destination_path))
        {  
            if (mkdir(destination_path,0777)) 
            {  
                printf("创建文件夹失败！");  
            }  
        }  
        char *path;  
        path=(char*)malloc(512);
        path=str_contact(path,source_path);
        struct dirent* filename;  
        DIR* dp=opendir(path);  
        while(filename=readdir(dp))
        { 
            memset(path,0,sizeof(path));  
            path=str_contact(path,source_path);  
 
            char *file_source_path;  
            file_source_path=(char*)malloc(512);  
            if(!endwith(source_path,'/')){  
                file_source_path=str_contact(file_source_path,source_path);  
                file_source_path=str_contact(source_path,"/");  
            }  
            else{  
                file_source_path=str_contact(file_source_path,source_path);  
            }  
            char *file_destination_path;  
            file_destination_path=(char*)malloc(512);  
            if(!endwith(destination_path,'/'))
            {  
                file_destination_path=str_contact(file_destination_path,destination_path);  
                file_destination_path=str_contact(destination_path,"/");  
            }  
            else
            {  
                file_destination_path=str_contact(file_destination_path,destination_path);  
            }   
            file_source_path=str_contact(file_source_path,filename->d_name);  
            file_destination_path=str_contact(file_destination_path,filename->d_name);  
            if(is_dir(file_source_path))
            {
                if(!endwith(file_source_path,'.'))
                {
                    copy_folder(file_source_path,file_destination_path);  
                }         
            }  
            else
			{  
                copy_file(file_source_path,file_destination_path);  
                printf("复制%s到%s成功！\n",file_source_path,file_destination_path);  
            }  
        }     
    }  
    int main(int argc,char *argv[])
    {  
        if(argv[1]==NULL||argv[1]==NULL)
        {  
            printf("请输入两个文件夹路径，第一个为源，第二个为目的！\n");  
            exit(1);  
        }  
        char* source_path=argv[1];
        char* destination_path=argv[2];  
        DIR* source=opendir(source_path);  
        DIR* destination=opendir(destination_path);  
        if(!source||!destination)
        {  
            printf("你输入的一个参数或者第二个参数不是文件夹！\n");  
        }  
        copy_folder(source_path,destination_path);
        return 0;  
    }  
