#pragma once
#include <opencv2/opencv.hpp>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace cv;
using namespace std;
class Recovery {
private:

	//����data���ڴ��ÿһ֡ͼ���ÿһ�����ص������ֵ�Լ���ֵ�ĳ��ִ���
	vector<vector<unordered_map<uchar, int>>> data[3];

	//����max���ڼ�¼ÿһ֡ͼ���ÿһ�����ص���ִ�����������ֵ
	vector<vector<pair<uchar, int>>>  max[3];

	int frame_count=0;
	Mat src;
	Mat dst;
	VideoCapture cap;
public:

	void process(string readpath);

	void saveAndShowResult(string savepath);
};
