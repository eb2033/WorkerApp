#include "CWorker.h"

//constructor function definitions
CWorker::CWorker(void)
{
    m_Name = "";
    m_WorkNo = 0;
    m_HourlyRate = 0;
    m_HoursWorked = 0;
}

                      //fred      5023
CWorker::CWorker(string name, int workNo)
{
    m_Name = name;
    m_WorkNo = workNo;
    m_HourlyRate = 0;
    m_HoursWorked = 0;
}


//Regular function definitions

                              //   12.50
void CWorker::SetHourlyRate(double rate)
{
    m_HourlyRate = rate;
}

                       //10
void CWorker::AddHours(int hours)
{
    m_HoursWorked += hours;
}


double CWorker::GetWage(void)
{
    double wage;
    wage = m_HourlyRate * m_HoursWorked;
    return wage;
}


void CWorker::Display(void)
{
    //output the content of the worker object
    cout << "Worker Name: " << m_Name << endl;
    cout << "Worker Number: " << m_WorkNo << endl;
    cout << "Hourly Rate: " << m_HourlyRate << endl;
    cout << "Hours Worked: " << m_HoursWorked << endl <<endl;
}

void CWorker::SetHoursWorked(int hours) 
{
    m_HoursWorked = hours;

}

int CWorker::GetWorkNum(void)
{
    return m_WorkNo;
}

string CWorker::GetName(void) 
{
    return m_Name;
}

int CWorker::GetHoursWorked(void) 
{
    return m_HoursWorked;
}

double CWorker::GetHourlyRate(void) 
{
    return m_HourlyRate;
}

bool CWorker::HasWorkNum(int workNum)
{
    return false;
    
}
