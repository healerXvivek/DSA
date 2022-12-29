class Solution {
public:
    void help(vector<vector<int>>& img, int nc, int oc, int i, int j){
        if(i<0 || i==img.size() || j<0 || j==img[0].size() || img[i][j]!=oc){
            return;
        }
        img[i][j]=nc;
        help(img,nc,oc,i,j-1);
        help(img,nc,oc,i-1,j);
        help(img,nc,oc,i,j+1);
        help(img,nc,oc,i+1,j);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor=image[sr][sc];
        if( oldColor == newColor)
        return image;
        help(image, newColor, oldColor, sr, sc);
        return image;
    }
};
