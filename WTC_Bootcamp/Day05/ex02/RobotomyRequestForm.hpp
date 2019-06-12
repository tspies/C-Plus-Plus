#ifndef ROBOTOMYREQUESTFORM_HPP
 #define ROBOTOMYREQUESTFORM_HPP
 #include "Form.hpp"
 #include "Bureaucrat.hpp"
    class RobotomyRequestForm : public Form
    {
        private:
            static int const _valueToSign;
            static int const _valueToExe;
        public:
            RobotomyRequestForm(void);
            RobotomyRequestForm(std::string target);
            RobotomyRequestForm(const RobotomyRequestForm &form);
            ~RobotomyRequestForm();

            RobotomyRequestForm &operator=(const RobotomyRequestForm& obj);
            virtual void execute(Bureaucrat const &executor) const;
    };
#endif