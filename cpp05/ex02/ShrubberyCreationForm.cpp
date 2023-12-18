/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:15 by hznagui           #+#    #+#             */
/*   Updated: 2023/12/18 15:06:24 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery request",145,137)
{
    Target = "home";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery request",145,137)
{
    Target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj)
{
    Target = obj.Target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    Target = obj.Target;
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm() 
{
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    if (!getSigned())
        throw NotSigned();
    else if (executor.getGrade() > getGradeToExce())
        throw GradeTooLowException();
    else 
    {
        std::string tmp = Target + "_shrubbery";
        std::fstream faile(tmp.c_str(),std::ios::out);
        if (!faile.is_open())
            throw FileProblem();
faile <<"                                                         ."<<std::endl;
faile <<"                                              .         ;  "<<std::endl;
faile <<"                 .              .              ;%     ;;   "<<std::endl;
faile <<"                   ,           ,                :;%  %;   "<<std::endl;
faile <<"                    :         ;                   :;%;'     .,   "<<std::endl;
faile <<"           ,.        %;     %;            ;        %;'    ,;"<<std::endl;
faile <<"             ;       ;%;  %%;        ,     %;    ;%;    ,%'"<<std::endl;
faile <<"              %;       %;%;      ,  ;       %;  ;%;   ,%;' "<<std::endl;
faile <<"               ;%;      %;        ;%;        % ;%;  ,%;'"<<std::endl;
faile <<"                `%;.     ;%;     %;'         `;%%;.%;'"<<std::endl;
faile <<"                 `:;%.    ;%%. %@;        %; ;@%;%'"<<std::endl;
faile <<"                    `:%;.  :;bd%;          %;@%;'"<<std::endl;
faile <<"                      `@%:.  :;%.         ;@@%;'   "<<std::endl;
faile <<"                        `@%.  `;@%.      ;@@%;     "<<std::endl;    
faile <<"                          `@%%. `@%%    ;@@%;       "<<std::endl; 
faile <<"                            ;@%. :@%%  %@@%;     "<<std::endl;  
faile <<"                              %@bd%%%bd%%:;     "<<std::endl;
faile <<"                                #@%%%%%:;;"<<std::endl;
faile <<"                                %@@%%%::;"<<std::endl;
faile <<"                                %@@@%(o);  . '   "<<std::endl;      
faile <<"                                %@@@o%;:(.,'     "<<std::endl;    
faile <<"                            `.. %@@@o%::;         "<<std::endl;
faile <<"                               `)@@@o%::;         "<<std::endl;
faile <<"                                %@@(o)::;        "<<std::endl;
faile <<"                               .%@@@@%::;         "<<std::endl;
faile <<"                               ;%@@@@%::;.        "<<std::endl;  
faile <<"                              ;%@@@@%%:;;;. "<<std::endl;
faile <<"                          ...;%@@@@@%%:;;;;,..    "<<std::endl;                    
        faile.close();
    }
}
const char * ShrubberyCreationForm::FileProblem::what()const throw() {return "file can't created";}
