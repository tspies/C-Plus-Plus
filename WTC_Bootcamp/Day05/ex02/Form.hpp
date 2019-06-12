#ifndef FORM_HPP
 #define FORM_HPP
    #include <iostream>
    class Bureaucrat;
    
    class Form
    {
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException();
                virtual ~GradeTooHighException() throw();
                GradeTooHighException(const GradeTooHighException &obj);

                GradeTooHighException &operator=(const GradeTooHighException &obj);
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                virtual ~GradeTooLowException() throw ();
                GradeTooLowException(const GradeTooLowException &obj);

                GradeTooLowException &operator=(const GradeTooLowException &obj);
                const char *what() const throw();
        };
        class NotSignedException : public std::exception
        {
            public:
                NotSignedException();
                virtual ~NotSignedException() throw ();
                NotSignedException(const NotSignedException &obj);

                NotSignedException &operator=(const NotSignedException &obj);
                const char *what() const throw();
        };

        private:
            std::string _name;
            std::string _target;
            bool _is_signed;
            int const _signGrade;
            int const _exeGrade;

        public:
        Form();
        ~Form();
        Form(std::string target, std::string name, int sign, int exe);
        Form &operator=(const Form &obj);
         int  getSignGrade(void) const;
         int  getExeGrade(void) const;
         int  getIsSigned(void) const;
         std::string getTarget(void) const;
         std::string getName(void) const;
         void setIsSigned(void);
         void beSigned(Bureaucrat &bureaucrat);
         virtual void execute(Bureaucrat const &executor) const;
    };
    std::ostream &operator<<(std::ostream &ostream, const Form &obj);
#endif