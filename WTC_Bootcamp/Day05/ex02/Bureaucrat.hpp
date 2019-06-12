#ifndef BUREAUCRAT_HPP
 #define BUREAUCRAT_HPP
    #include <iostream>

    class Form;

    class Bureaucrat
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
        private:
            std::string const _name;
            int _grade;
        public:
            ~Bureaucrat(void);
            Bureaucrat(const Bureaucrat &obj);
            Bureaucrat(std::string name, int grade);

            Bureaucrat &operator=(const Bureaucrat &rhs);
            std::string getName(void) const;
            int  getGrade() const;
            void setName(std::string name);
            void upGrade();
            void downGrade();
            void signForm(Form &form);
            void exeForm(Form const &form);
    };
    std::ostream &operator<<(std::ostream &ostream, const Bureaucrat &obj);
 #endif