    //Leetcode question # 733
    //@Author: RAUNAQ SINGH
    //https://www.youtube.com/watch?v=zWqxSvkn9qk&ab_channel=5MinutesEngineering (Very good video for the concept explanation)
    //sr-->x-coordinate; sc-->y-coordinate
    // image[sr][sc]--> Old color; color-->New color
    void changeColor(int x,int y,int newColor,int oldColor,int maxX,int maxY,vector<vector<int>> &image){
        if(x==-1 || y==-1 || x==maxX || y==maxY) return;
        if(image[x][y]==oldColor){
            image[x][y]=newColor;
            changeColor(x+1,y,newColor,oldColor,maxX,maxY,image);
            changeColor(x-1,y,newColor,oldColor,maxX,maxY,image);
            changeColor(x,y+1,newColor,oldColor,maxX,maxY,image);
            changeColor(x,y-1,newColor,oldColor,maxX,maxY,image);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image; // If the image[x][y] already contain the new color then simply return the image vector as per the example 2
        int maxX=image.size(),maxY=image[0].size(),oldColor=image[sr][sc];
        changeColor(sr,sc,color,oldColor,maxX,maxY,image);
        return image;
    }
